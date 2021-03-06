//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSMutableArray, NSString;

@interface HMIHLSPlaylist : HMFObject <HMFLogging>
{
    NSMutableArray *_lines;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000000bcbe6
- (void).cxx_destruct;	// IMP=0x00000000000bcc06
@property(readonly) NSMutableArray *lines; // @synthesize lines=_lines;
- (void)end;	// IMP=0x00000000000bcbc2
- (void)open;	// IMP=0x00000000000bcba5
- (void)appendSeparableSegmentWithPath:(id)arg1 duration:(double)arg2 byteRange:(struct _NSRange)arg3;	// IMP=0x00000000000bca63
- (void)appendSeparableSegmentWithPath:(id)arg1 duration:(double)arg2;	// IMP=0x00000000000bca4c
- (void)appendInitializationSegmentWithPath:(id)arg1;	// IMP=0x00000000000bc9e5
- (void)appendEncryptionModeWithPath:(id)arg1;	// IMP=0x00000000000bc97e
- (void)appendIFrameOnly;	// IMP=0x00000000000bc95a
@property(readonly) NSString *playlistString;
- (id)initWithTargetDuration:(double)arg1;	// IMP=0x00000000000bc7e0
- (id)initWithPlaylistString:(id)arg1;	// IMP=0x00000000000bc731

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

