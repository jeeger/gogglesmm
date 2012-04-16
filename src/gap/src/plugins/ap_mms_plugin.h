#ifndef INPUT_MMS_DEVICE_H
#define INPUT_MMS_DEVICE_H

namespace ap {

class MMSInput : public InputPlugin {
protected:
  void * mms;
private:
  MMSInput(const MMSInput&);
  MMSInput &operator=(const MMSInput&);
protected:
  FXival io_read(void*,FXival);
public:
  /// Constructor
  MMSInput(InputThread *);

  FXbool open(const FXString & uri);

  /// Set Position
  FXlong position(FXlong offset,FXuint from);

  /// Get Position
  FXlong position() const;

  /// Size
  FXlong size();

  /// End of Input
  FXbool eof();

  /// Serial
  FXbool serial() const;

  /// Get plugin type
  FXuint plugin() const;

  /// Destructor
  virtual ~MMSInput();
  };

}
#endif
