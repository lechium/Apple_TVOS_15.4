//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeatureNodeCollection-Protocol.h>

@class NSString, PGGraphDateNodeCollection, PGGraphFeatureNodeCollection;

@interface PGGraphCalendarUnitNodeCollection <PGAssetCollectionFeatureNodeCollection>
{
}

+ (id)calendarUnitNodesForUnitValues:(id)arg1 inGraph:(id)arg2;	// IMP=0x00000000004c38bf
+ (id)calendarUnitNodesForUnitValue:(long long)arg1 inGraph:(id)arg2;	// IMP=0x00000000004c377a
+ (id)dateOfCalendarUnit;	// IMP=0x00000000004c36d5
+ (id)filter;	// IMP=0x00000000004c365e
+ (unsigned long long)calendarUnit;	// IMP=0x00000000004c362c
+ (Class)nodeClass;	// IMP=0x00000000004c361b
@property(readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property(readonly, nonatomic) PGGraphDateNodeCollection *dateNodes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

