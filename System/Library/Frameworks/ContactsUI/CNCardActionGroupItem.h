//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface CNCardActionGroupItem
{
    NSMutableArray *_actions;	// 8 = 0x8
}

+ (id)actionGroupItemWithActions:(id)arg1;	// IMP=0x0000000000003443
+ (id)actionGroupItemWithAction:(id)arg1;	// IMP=0x00000000000033f6
- (void).cxx_destruct;	// IMP=0x000000000000366a
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void)addAction:(id)arg1;	// IMP=0x000000000000363c
- (Class)cellClass;	// IMP=0x000000000000362b
- (id)initWithAction:(id)arg1;	// IMP=0x00000000000033a4
- (id)init;	// IMP=0x0000000000003347

@end
