/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class <MFDataConsumer>;



@interface LineEndingConverter : NSObject <MFDataConsumer>
{
    <MFDataConsumer> *_consumer;
    BOOL _lastCR;
}

+ (id)converterWithConsumer:(id)arg1;

- (id)initWithConsumer:(id)arg1;
- (void)appendData:(id)arg1;
- (void)done;
- (void)dealloc;

@end
