//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PXStoryColorGradingCubeInfo : NSObject
{
    NSDictionary *_backingDict;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000065caf0
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) _Bool isUserSelectable;
@property(readonly, nonatomic) _Bool isAutoSelectable;
@property(readonly, nonatomic) NSString *tier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *resource;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000065c973
- (id)init;	// IMP=0x000000000065c95a

@end

