//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPLocationReadWriteServerProtocol-Protocol.h>

@interface PPLocationReadWriteServerRequestHandler : NSObject <PPLocationReadWriteServerProtocol>
{
}

- (void)clearWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9abb
- (void)cloudSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b9a33
- (void)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(_Bool)arg5 decayRate:(double)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000000b98a6

@end

