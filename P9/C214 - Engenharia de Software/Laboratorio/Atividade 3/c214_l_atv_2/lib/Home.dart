import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';

class Home extends StatefulWidget {
  const Home({Key? key}) : super(key: key);

  get initialValue => null;

  @override
  State<Home> createState() => _HomeState();
}

class _HomeState extends State<Home> {

  late final _controller = TextEditingController();
  String text = '';

  @override
  Widget build(BuildContext context) {

    return Scaffold(
      backgroundColor: Colors.blueAccent,
      body: Container(
        padding: const EdgeInsets.only(top: 0, left: 30, right: 30),
        child: ListView(
          children: [

            const SizedBox(
              width: 20,
              height: 200,
            ),

            Container(
              alignment: Alignment.center,
              child: Text(
                "Flutter",
                style: GoogleFonts.aladin(
                    fontSize: 80,
                    color: Colors.amber
                ),
              ),
            ),

            const SizedBox(
              width: 20,
              height: 20,
            ),

            Container(
              alignment: Alignment.center,
              child: Text(
                "Dependencies",
                style: GoogleFonts.aladin(
                    fontSize: 65,
                    color: Colors.amber
                ),
              ),
            ),

            const SizedBox(
              width: 20,
              height: 20,
            ),

            Container(
              alignment: Alignment.topRight,
              child: Text(
                "C214 - L2",
                style: GoogleFonts.aladin(
                    fontSize: 25,
                    color: Colors.amber
                ),
              ),
            ),

            const SizedBox(
              width: 20,
              height: 40,
            ),

            TextFormField(
              onChanged: (String string){
                setState(() {
                  text = string;
                });
              },
              controller: _controller,
              keyboardType: TextInputType.phone,
              decoration: InputDecoration(
                enabledBorder: OutlineInputBorder(
                    borderSide: BorderSide(
                        color: Colors.lightGreen,
                        width: 5.0
                    )
                ),
                border: OutlineInputBorder(
                    borderRadius: BorderRadius.circular(8.0)
                ),
                labelText: "Input",
                labelStyle: TextStyle(
                    color: Colors.amber,
                    fontWeight: FontWeight.w400,
                    fontSize: 35),
              ),
              style: GoogleFonts.aladin(
                  fontSize: 20,
                  color: Colors.amber
              ),
            ),

            const SizedBox(
              width: 20,
              height: 40,
            ),

            Container(
              alignment: Alignment.centerLeft,
              child: Text(
                "Output: ${_controller.text}",
                style: GoogleFonts.aladin(
                    fontSize: 35,
                    color: Colors.amber
                ),
              ),
            ),
          ],
        ),
      )
    );
  }
}
