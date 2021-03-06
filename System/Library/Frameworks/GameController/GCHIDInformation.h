//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCControllerHIDInfo-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface GCHIDInformation : NSObject <GCControllerHIDInfo, NSSecureCoding>
{
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 8 = 0x8
    NSNumber *_registryID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000059e23
- (void).cxx_destruct;	// IMP=0x000000000005a0c4
@property(copy, nonatomic) NSNumber *registryID; // @synthesize registryID=_registryID;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)setController:(id)arg1;	// IMP=0x000000000005a091
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059fe3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059efa
- (id)init;	// IMP=0x0000000000059ea0
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000059e2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

