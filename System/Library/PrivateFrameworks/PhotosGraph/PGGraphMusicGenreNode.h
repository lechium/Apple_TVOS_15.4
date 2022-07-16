//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGGraphGenre-Protocol.h>

@class NSString;

@interface PGGraphMusicGenreNode <PGGraphGenre>
{
    NSString *_label;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000040ef94
- (id)label;	// IMP=0x000000000040ef83
@property(readonly, nonatomic) NSString *name;
- (unsigned short)domain;	// IMP=0x000000000040ef66
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x000000000040ef54
- (id)initWithLabel:(id)arg1;	// IMP=0x000000000040eeda

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
