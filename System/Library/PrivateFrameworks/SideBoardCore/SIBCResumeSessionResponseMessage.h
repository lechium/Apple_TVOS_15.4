//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SideBoardCore/SIBCMessage-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SIBCResumeSessionResponseMessage : NSObject <SIBCMessage>
{
    long long _status;	// 8 = 0x8
}

+ (id)logHandle;	// IMP=0x00000000000047df
+ (id)messageId;	// IMP=0x0000000000004770
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy) NSString *description;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x0000000000004489
- (id)dictionaryEncoding;	// IMP=0x0000000000004481

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

