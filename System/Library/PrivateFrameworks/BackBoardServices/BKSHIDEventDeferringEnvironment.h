//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/BSXPCCoding-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface BKSHIDEventDeferringEnvironment : NSObject <BSProtobufSerializable, NSSecureCoding, NSCopying, BSXPCCoding>
{
    NSString *_identifier;	// 8 = 0x8
}

+ (id)protobufSchema;	// IMP=0x0000000000004346
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000433e
+ (id)environmentWithIdentifier:(id)arg1;	// IMP=0x000000000000404c
+ (id)keyboardFocusEnvironment;	// IMP=0x000000000000401c
+ (id)systemEnvironment;	// IMP=0x0000000000003fec
- (void).cxx_destruct;	// IMP=0x0000000000003fdc
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003f63
@property(readonly) unsigned long long hash;
- (id)initForProtobufDecoding;	// IMP=0x0000000000003f1e
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000003e0b
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000003db9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003c9f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003c7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003c71
- (_Bool)_isKeyboardFocusEnvironment;	// IMP=0x0000000000003c54
- (_Bool)_isSystemEnvironment;	// IMP=0x0000000000003c37
- (id)_initWithIdentifier:(id)arg1;	// IMP=0x0000000000003a5d
- (id)init;	// IMP=0x000000000000392f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

