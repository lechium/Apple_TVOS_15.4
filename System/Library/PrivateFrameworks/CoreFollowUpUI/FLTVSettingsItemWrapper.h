//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLFollowUpItem;

@interface FLTVSettingsItemWrapper : NSObject
{
    _Bool _isActionInProgress;	// 8 = 0x8
    FLFollowUpItem *_followUpItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000080b5
@property(nonatomic) _Bool isActionInProgress; // @synthesize isActionInProgress=_isActionInProgress;
@property(retain, nonatomic) FLFollowUpItem *followUpItem; // @synthesize followUpItem=_followUpItem;
- (id)initWithFollowUpItem:(id)arg1;	// IMP=0x0000000000007fa4

@end

