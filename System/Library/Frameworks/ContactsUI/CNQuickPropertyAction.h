//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyAction;

__attribute__((visibility("hidden")))
@interface CNQuickPropertyAction
{
}

- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018ffc
- (unsigned long long)score;	// IMP=0x0000000000018ee9
- (_Bool)enabled;	// IMP=0x0000000000018e66
- (id)subtitleForContext:(long long)arg1;	// IMP=0x0000000000018d84
- (id)titleForContext:(long long)arg1;	// IMP=0x0000000000018ce8
- (id)identifier;	// IMP=0x0000000000018c6e
- (id)propertyItem;	// IMP=0x0000000000018c1e
@property(readonly, nonatomic) CNPropertyAction *propertyAction;
- (id)initWithPropertyAction:(id)arg1;	// IMP=0x0000000000018bdd

@end
