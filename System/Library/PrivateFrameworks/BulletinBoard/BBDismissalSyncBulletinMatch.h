//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BBDismissalItem, NSString;

@interface BBDismissalSyncBulletinMatch : NSObject
{
    NSString *_sectionID;	// 8 = 0x8
    BBDismissalItem *_dismissalItem;	// 16 = 0x10
    NSString *_dismissalID;	// 24 = 0x18
    unsigned long long _feeds;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000028a6
@property(nonatomic) unsigned long long feeds; // @synthesize feeds=_feeds;
@property(copy, nonatomic) NSString *dismissalID; // @synthesize dismissalID=_dismissalID;
@property(retain, nonatomic) BBDismissalItem *dismissalItem; // @synthesize dismissalItem=_dismissalItem;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (id)description;	// IMP=0x0000000000002801
- (id)initWithDismissalDictionaryItem:(id)arg1;	// IMP=0x0000000000002780
- (id)initWithDismissalID:(id)arg1 andItem:(id)arg2;	// IMP=0x00000000000026dc

@end

