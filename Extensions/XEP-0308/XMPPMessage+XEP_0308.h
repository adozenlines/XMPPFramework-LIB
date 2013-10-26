#import "XMPPMessage.h"

@interface XMPPMessage (XEP_0308)

- (BOOL)isMessageCorrection;

- (NSString *)correctedMessageElementID;

- (void)addMessageCorrectionWithID:(NSString *)messageCorrectionID;

@end
