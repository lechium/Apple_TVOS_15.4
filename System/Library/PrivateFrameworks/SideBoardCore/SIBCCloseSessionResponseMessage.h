//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SideBoardCore/SIBCMessage-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SIBCCloseSessionResponseMessage : NSObject <SIBCMessage>
{
    long long _status;	// 8 = 0x8
}

+ (id)logHandle;	// IMP=0x00000000000137fb
+ (id)messageId;	// IMP=0x000000000001378c
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy) NSString *description;
- (id)initWithEncodedDictionary:(id)arg1;	// IMP=0x00000000000134a5
- (id)dictionaryEncoding;	// IMP=0x000000000001349d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

