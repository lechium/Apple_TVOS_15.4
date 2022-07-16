//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaLibraryAlbumAppData, MPModelObject;

@interface MPModelLibraryAlbumAppDataChangeRequest : NSObject <NSCopying>
{
    MPModelObject *_modelObject;	// 8 = 0x8
    MPMediaLibraryAlbumAppData *_albumAppData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000139a53
@property(retain, nonatomic) MPMediaLibraryAlbumAppData *albumAppData; // @synthesize albumAppData=_albumAppData;
@property(retain, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001399b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000139971

@end
