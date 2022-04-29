import numpy as np
import pydub as AudioSegment
from pydub.playback import _play_with_simpleaudio as play_sound
import audio_effects as ae
#delay = ae.reverb('')

current_audio = AudioSegment.from_file('Can Can.mp3')
current_bpm = 130
current_interval = ae.bar_to_real_time(3 / 16, current_bpm, 1) / 1000
current_audio_with_delay = ae.delay(current_audio,
                                    interval=current_interval,
                                    unit=10)
play_sound(current_audio_with_delay) # listen to the delay effects