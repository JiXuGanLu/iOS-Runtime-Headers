/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSFileHandle;

@interface ATFileBuffer : NSObject {
    NSFileHandle *_bufferFileHandle;
    unsigned int _currentReadLocation;
    unsigned int _length;
}

- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (id)init;
- (unsigned int)length;
- (id)readDataOfLength:(unsigned int)arg1;
- (void)rewind:(unsigned int)arg1;
- (void)rewindData:(id)arg1;

@end