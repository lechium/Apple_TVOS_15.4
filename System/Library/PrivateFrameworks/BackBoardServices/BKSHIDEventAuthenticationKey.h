//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface BKSHIDEventAuthenticationKey : NSObject <NSSecureCoding, BSProtobufSerializable>
{
    NSData *_keyData;	// 8 = 0x8
    CDStruct_43cfb2c2 _hmacContext;	// 16 = 0x10
    struct atomic_flag _hmacInitialized;	// 400 = 0x190
    long long _generation;	// 408 = 0x198
}

+ (id)protobufSchema;	// IMP=0x0000000000026d36
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026d2e
+ (id)eventAuthenticationKeyWithKeyBuffer:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000026cfb
+ (id)eventAuthenticationKey;	// IMP=0x0000000000026c94
- (void).cxx_destruct;	// IMP=0x0000000000026c84
@property(readonly, nonatomic) long long generation; // @synthesize generation=_generation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026c02
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026b4e
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

