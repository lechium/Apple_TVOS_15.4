//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFAccessoryRepresentableObjectFiltering-Protocol.h>

@class NSSet, NSString, NSUUID;

@interface HFAccessoryTypeGroup : NSObject <HFAccessoryRepresentableObjectFiltering>
{
    NSSet *_types;	// 8 = 0x8
    NSUUID *_uniqueIdentifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

+ (id)accessoryTypeGroupWithIdentifier:(id)arg1;	// IMP=0x000000000004efa3
+ (id)unionGroups:(id)arg1;	// IMP=0x000000000004ee21
+ (id)sensorAccessoryTypeGroup;	// IMP=0x000000000004ea8a
+ (id)waterAccessoryTypeGroup;	// IMP=0x000000000004e7bf
+ (id)securityAccessoryTypeGroup;	// IMP=0x000000000004e491
+ (id)mediaAccessoryTypeGroup;	// IMP=0x000000000004e1db
+ (id)lightAccessoryTypeGroup;	// IMP=0x000000000004df92
+ (id)climateAccessoryTypeGroup;	// IMP=0x000000000004dbfb
- (void).cxx_destruct;	// IMP=0x000000000004f544
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSSet *types; // @synthesize types=_types;
- (id)groupBySubtractingGroup:(id)arg1;	// IMP=0x000000000004f443
- (id)groupByUnioningGroup:(id)arg1;	// IMP=0x000000000004f360
- (id)groupByIntersectingGroup:(id)arg1;	// IMP=0x000000000004f215
- (id)initWithName:(id)arg1 accessoryTypes:(id)arg2;	// IMP=0x000000000004db75
- (id)initWithAccessoryTypes:(id)arg1;	// IMP=0x000000000004db5e
- (id)_initWithIdentifierString:(id)arg1 name:(id)arg2 accessoryTypes:(id)arg3;	// IMP=0x000000000004da7d
- (id)_initWithName:(id)arg1 set:(id)arg2;	// IMP=0x000000000004d9e6
- (id)_initWithIdentifier:(id)arg1 name:(id)arg2 set:(id)arg3;	// IMP=0x000000000004d92f
- (id)filterAccessoryRepresentableObjects:(id)arg1;	// IMP=0x0000000000072be3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

