//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudLibraryConnection, ICConnectionConfiguration, ML3MusicLibrary, NSString;

@interface JaliscoImporter : NSObject
{
    _Bool _isCancelled;	// 8 = 0x8
    float _progress;	// 12 = 0xc
    CloudLibraryConnection *_connection;	// 16 = 0x10
    ICConnectionConfiguration *_configuration;	// 24 = 0x18
    ML3MusicLibrary *_musicLibrary;	// 32 = 0x20
}

+ (id)oversizeLogCategory;	// IMP=0x002000000003318f
+ (id)logCategory;	// IMP=0x0010000000033078
- (void).cxx_destruct;	// IMP=0x0020000000032c57
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) CloudLibraryConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
- (void)importTracksUpToRevision:(unsigned int)arg1 clientIdentity:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000324d9
- (void)cancel;	// IMP=0x00100000000324cf
- (void)clearNeedsUpdateForTokens;	// IMP=0x00100000000324c9
- (_Bool)needsUpdateForTokens;	// IMP=0x00100000000324c1
- (_Bool)includePreorders;	// IMP=0x00100000000324b9
- (_Bool)includeHiddenItems;	// IMP=0x00100000000324b1
- (_Bool)includeFlavors;	// IMP=0x00100000000324a9
- (unsigned int)onDiskRevision;	// IMP=0x00100000000324a1
- (id)updateLibraryFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 withResponse:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x0010000000032499
- (id)purchaseTokens;	// IMP=0x0010000000032491
- (id)metadataKeys;	// IMP=0x0010000000032489
- (id)queryFilter;	// IMP=0x0010000000032481
- (void)setProgress:(float)arg1;	// IMP=0x0010000000032476
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000003230f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

