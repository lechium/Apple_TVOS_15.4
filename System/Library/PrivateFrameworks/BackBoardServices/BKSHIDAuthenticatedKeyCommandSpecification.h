//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionStreamable-Protocol.h>
#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BKSHIDEventKeyCommand, NSString;

@interface BKSHIDAuthenticatedKeyCommandSpecification : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable>
{
    unsigned long long _context;	// 8 = 0x8
    BKSHIDEventKeyCommand *_keyCommand;	// 16 = 0x10
}

+ (id)protobufSchema;	// IMP=0x0000000000045d58
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000045d50
+ (id)specificationWithKeyCommand:(id)arg1 context:(unsigned long long)arg2;	// IMP=0x0000000000045cd7
- (void).cxx_destruct;	// IMP=0x0000000000045cc7
@property(retain, nonatomic) BKSHIDEventKeyCommand *keyCommand; // @synthesize keyCommand=_keyCommand;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0000000000045c1f
- (id)initForProtobufDecoding;	// IMP=0x0000000000045bf0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000045b7e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045935
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000458bc
@property(readonly) unsigned long long hash;
- (id)_init;	// IMP=0x00000000000456ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

