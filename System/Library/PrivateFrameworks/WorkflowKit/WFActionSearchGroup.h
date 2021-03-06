//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WFActionSearchGroup : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_localizedName;	// 16 = 0x10
    NSArray *_actions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c754
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 actions:(id)arg3;	// IMP=0x000000000000c4d1

@end

