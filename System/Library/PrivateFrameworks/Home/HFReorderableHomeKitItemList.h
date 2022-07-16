//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSArray, NSString;
@protocol HMApplicationData;

@interface HFReorderableHomeKitItemList : NSObject <NSCopying, NSMutableCopying>
{
    id <HMApplicationData> _applicationDataContainer;	// 8 = 0x8
    NSString *_category;	// 16 = 0x10
    NSArray *_sortedHomeKitObjectIdentifiers;	// 24 = 0x18
}

+ (id)_dataForHomeKitItem:(id)arg1;	// IMP=0x000000000026ee33
- (void).cxx_destruct;	// IMP=0x000000000026ff7b
@property(copy, nonatomic) NSArray *sortedHomeKitObjectIdentifiers; // @synthesize sortedHomeKitObjectIdentifiers=_sortedHomeKitObjectIdentifiers;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) __weak id <HMApplicationData> applicationDataContainer; // @synthesize applicationDataContainer=_applicationDataContainer;
- (CDUnknownBlockType)_actionSetTypeComparator;	// IMP=0x000000000026fda9
- (CDUnknownBlockType)_reorderableObjectDateAddedComparator;	// IMP=0x000000000026fd24
- (CDUnknownBlockType)_reorderableObjectTitleComparator;	// IMP=0x000000000026fc9f
- (CDUnknownBlockType)_sortedHomeKitIdentifierComparator;	// IMP=0x000000000026fb1f
@property(readonly, nonatomic) NSString *_applicationDataKey;
- (CDUnknownBlockType)_homeKitItemDataComparator;	// IMP=0x000000000026f72d
@property(readonly, nonatomic) CDUnknownBlockType sortedHomeKitObjectComparator;
@property(readonly, nonatomic) CDUnknownBlockType sortedHomeKitItemComparator;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026eb87
- (unsigned long long)hash;	// IMP=0x000000000026eb43
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026ea7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026e9b1
- (id)initWithApplicationDataContainer:(id)arg1 category:(id)arg2;	// IMP=0x000000000026e7b5
- (id)init;	// IMP=0x000000000026e700

@end

