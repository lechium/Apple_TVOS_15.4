//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLayoutConstraint.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNBoundLayoutConstraint : NSLayoutConstraint
{
    id _object;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
}

+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constantObject:(id)arg7 keyPath:(id)arg8;	// IMP=0x000000000005a970
- (void).cxx_destruct;	// IMP=0x000000000005ad44
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) id object; // @synthesize object=_object;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000005ac34
- (void)_boundValueDidChange;	// IMP=0x000000000005ab6c
- (void)unbind;	// IMP=0x000000000005aad4
- (void)bindConstantToObject:(id)arg1 keyPath:(id)arg2;	// IMP=0x000000000005aa32
- (void)dealloc;	// IMP=0x000000000005a932

@end

