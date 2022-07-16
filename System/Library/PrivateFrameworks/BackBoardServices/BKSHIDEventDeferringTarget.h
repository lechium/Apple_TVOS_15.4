//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionStreamable-Protocol.h>
#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSMutableCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BKSHIDEventDeferringToken, NSString;

@interface BKSHIDEventDeferringTarget : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying, NSMutableCopying>
{
    int _pid;	// 8 = 0x8
    BKSHIDEventDeferringToken *_token;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b302
+ (id)protobufSchema;	// IMP=0x000000000000b29f
- (void).cxx_destruct;	// IMP=0x000000000000acdd
@property(readonly, copy, nonatomic) BKSHIDEventDeferringToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x000000000000ac38
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ab4e
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a82f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a7bd
- (id)initForProtobufDecoding;	// IMP=0x000000000000a78e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a752
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a747
- (id)_initWithPID:(int)arg1 token:(id)arg2;	// IMP=0x000000000000a2ca
- (id)init;	// IMP=0x000000000000a19c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
