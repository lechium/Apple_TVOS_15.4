//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeadBoardModel/HBMDSItem-Protocol.h>

@class NSString;

@interface HBMDSFolder <HBMDSItem>
{
    NSString *_displayName;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ac52
- (void).cxx_destruct;	// IMP=0x000000000000acf6
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000ac5a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000abb7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ab1c
@property(readonly, nonatomic) unsigned long long itemType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a941
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 orderID:(double)arg2 displayName:(id)arg3;	// IMP=0x000000000000a7e2
- (id)initWithIdentifier:(id)arg1 orderID:(double)arg2;	// IMP=0x000000000000a7ce
- (id)itemID;	// IMP=0x000000000000ad09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) double orderID;
@property(readonly) Class superclass;

@end
