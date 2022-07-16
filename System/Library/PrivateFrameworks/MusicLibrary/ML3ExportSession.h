//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class ML3MusicLibrary, NSOutputStream;

@interface ML3ExportSession : NSData
{
    ML3MusicLibrary *_library;	// 8 = 0x8
    NSOutputStream *_outputStream;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001262f0
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (id)exportPlaylistDeleted:(unsigned long long)arg1;	// IMP=0x00000000001262b6
- (id)exportPlaylistAdded:(unsigned long long)arg1;	// IMP=0x000000000012629e
- (id)exportTrackDeleted:(unsigned long long)arg1;	// IMP=0x0000000000126286
- (id)exportTrackUpdated:(unsigned long long)arg1;	// IMP=0x000000000012626e
- (id)exportTrackAdded:(unsigned long long)arg1;	// IMP=0x0000000000126256
- (id)end;	// IMP=0x000000000012623e
- (id)begin:(unsigned int)arg1;	// IMP=0x0000000000126226
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2;	// IMP=0x0000000000126184

@end
