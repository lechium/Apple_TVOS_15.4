//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface _UITintColorVisitor
{
    unsigned long long _reasons;	// 24 = 0x18
    UIView *_originalVisitedView;	// 32 = 0x20
    UIView *_changedSubview;	// 40 = 0x28
}

- (_Bool)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;	// IMP=0x00000000010b5998
- (_Bool)_visitView:(id)arg1;	// IMP=0x00000000010b5343
- (id)initWithNotificationReasons:(unsigned long long)arg1;	// IMP=0x00000000010b52de
- (id)initWithTraversalDirection:(unsigned long long)arg1;	// IMP=0x00000000010b527c

@end

