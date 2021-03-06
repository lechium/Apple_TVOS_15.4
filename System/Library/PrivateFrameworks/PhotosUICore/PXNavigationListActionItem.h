//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PXNavigationListActionItem
{
    NSString *_glyphImageName;	// 48 = 0x30
    long long _style;	// 56 = 0x38
    NSString *_actionType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000034d8af
@property(readonly, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
- (long long)style;	// IMP=0x000000000034d88d
- (id)glyphImageName;	// IMP=0x000000000034d87c
- (id)representedObject;	// IMP=0x000000000034d86a
- (unsigned long long)hash;	// IMP=0x000000000034d7e9
- (_Bool)isEqualToNavigationListItem:(id)arg1;	// IMP=0x000000000034d71f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000034d621
- (id)initWithActionType:(id)arg1;	// IMP=0x000000000034d537

@end

