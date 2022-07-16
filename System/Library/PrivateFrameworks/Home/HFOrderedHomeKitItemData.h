//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface HFOrderedHomeKitItemData : NSObject
{
    NSUUID *_uniqueIdentifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSDate *_dateAdded;	// 24 = 0x18
    NSString *_actionSetType;	// 32 = 0x20
}

+ (id)dataWithUniqueIdentifier:(id)arg1 title:(id)arg2 dateAdded:(id)arg3;	// IMP=0x000000000026e5ae
- (void).cxx_destruct;	// IMP=0x000000000026e6c2
@property(copy, nonatomic) NSString *actionSetType; // @synthesize actionSetType=_actionSetType;
@property(copy, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

@end
