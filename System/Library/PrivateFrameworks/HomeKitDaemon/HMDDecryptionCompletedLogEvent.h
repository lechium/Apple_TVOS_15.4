//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@interface HMDDecryptionCompletedLogEvent : HMMLogEvent
{
    _Bool _didDecryptionFail;	// 8 = 0x8
}

+ (id)decryptionCompletedWithFailure:(_Bool)arg1;	// IMP=0x00000000005094fd
@property(readonly) _Bool didDecryptionFail; // @synthesize didDecryptionFail=_didDecryptionFail;
- (id)initWithFailure:(_Bool)arg1;	// IMP=0x00000000005094a9

@end

