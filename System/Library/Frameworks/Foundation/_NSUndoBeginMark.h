//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _NSUndoBeginMark
{
    id _groupIdentifier;	// 32 = 0x20
    _Bool _isDiscardable;	// 40 = 0x28
}

- (id)description;	// IMP=0x00000000001555a9
- (_Bool)isBeginMark;	// IMP=0x00000000001555a1
- (void)setDiscardable:(_Bool)arg1;	// IMP=0x0000000000155591
- (_Bool)isDiscardable;	// IMP=0x0000000000155581
- (id)groupIdentifier;	// IMP=0x0000000000155563
- (void)setGroupIdentifier:(id)arg1;	// IMP=0x0000000000155508
- (void)dealloc;	// IMP=0x00000000001554a3

@end

