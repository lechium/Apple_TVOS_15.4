//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSPredicate;

@interface FlexCloudFetchOptions : NSObject
{
    _Bool _localOnly;	// 8 = 0x8
    NSPredicate *_predicate;	// 16 = 0x10
    NSArray *_sortDescriptors;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001365b
@property(nonatomic) _Bool localOnly; // @synthesize localOnly=_localOnly;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;

@end

