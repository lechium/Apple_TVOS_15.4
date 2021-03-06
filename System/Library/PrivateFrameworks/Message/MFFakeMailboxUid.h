//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface MFFakeMailboxUid
{
    _Bool _fakeIsSpecialMailboxUid;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    NSString *_fakeFullPath;	// 24 = 0x18
    NSString *_fakeURLString;	// 32 = 0x20
}

@property(nonatomic) _Bool fakeIsSpecialMailboxUid; // @synthesize fakeIsSpecialMailboxUid=_fakeIsSpecialMailboxUid;
@property(copy, nonatomic) NSString *fakeURLString; // @synthesize fakeURLString=_fakeURLString;
@property(copy, nonatomic) NSString *fakeFullPath; // @synthesize fakeFullPath=_fakeFullPath;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)store;	// IMP=0x00000000000c9e5f
- (_Bool)isStore;	// IMP=0x00000000000c9e57
- (_Bool)isSpecialMailboxUid;	// IMP=0x00000000000c9e45
- (id)fullPath;	// IMP=0x00000000000c9e33
- (id)URLString;	// IMP=0x00000000000c9e21
- (void)dealloc;	// IMP=0x00000000000c9dbb
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(_Bool)arg4;	// IMP=0x00000000000c9d2e
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3;	// IMP=0x00000000000c9d19

@end

