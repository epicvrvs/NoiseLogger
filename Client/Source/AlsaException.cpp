#include <alsa/asoundlib.h>

#include <Client/AlsaException.hpp>

AlsaException::AlsaException(const std::string & functionName, int errorCode)
{
	std::string alsaMessage(::snd_strerror(errorCode));
	_message = functionName + " error: " + alsaMessage;
}