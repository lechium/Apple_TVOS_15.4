//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayer, NSString, NSURL;

@interface SKVideoNode
{
    void *_skcVideoNode;	// 96 = 0x60
    _Bool _isUsingKVO;	// 104 = 0x68
    NSString *_videoFileName;	// 112 = 0x70
    NSURL *_videoFileURL;	// 120 = 0x78
    AVPlayer *_player;	// 128 = 0x80
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;	// IMP=0x000000000009a85f
+ (id)debugHierarchyPropertyDescriptions;	// IMP=0x000000000009a5d6
+ (id)videoNodeWithAVPlayer:(id)arg1;	// IMP=0x000000000009a00a
+ (id)videoNodeWithURL:(id)arg1;	// IMP=0x0000000000099fad
+ (id)videoNodeWithFileNamed:(id)arg1;	// IMP=0x0000000000099f50
+ (id)videoNodeWithVideoURL:(id)arg1;	// IMP=0x0000000000099f2e
+ (id)videoNodeWithVideoFileNamed:(id)arg1;	// IMP=0x0000000000099f0c
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000993d0
- (void).cxx_destruct;	// IMP=0x000000000009adc9
@property(nonatomic) struct CGPoint anchorPoint;
@property(nonatomic) struct CGSize size;
- (void)pause;	// IMP=0x000000000009a4ff
- (void)play;	// IMP=0x000000000009a4ea
- (void)setPaused:(_Bool)arg1;	// IMP=0x000000000009a496
- (void)_didMakeBackingNode;	// IMP=0x000000000009a46e
- (void *)_makeBackingNode;	// IMP=0x000000000009a437
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000009a30d
- (id)description;	// IMP=0x000000000009a203
- (_Bool)isEqualToNode:(id)arg1;	// IMP=0x000000000009a068
- (id)initWithAVPlayer:(id)arg1;	// IMP=0x0000000000099e06
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000099d1c
- (id)initWithFileNamed:(id)arg1;	// IMP=0x0000000000099bbf
- (id)initWithVideoFileNamed:(id)arg1;	// IMP=0x0000000000099a77
- (id)initWithVideoURL:(id)arg1;	// IMP=0x000000000009998d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000996b8
- (id)init;	// IMP=0x000000000009964e
- (void)commonInit;	// IMP=0x0000000000099648
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000994f9
@property(retain, nonatomic) AVPlayer *_player;
- (void)dealloc;	// IMP=0x00000000000993d8

@end
