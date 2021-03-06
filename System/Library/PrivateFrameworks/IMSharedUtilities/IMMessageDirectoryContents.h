//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMCombinedDirectoryContents, IMDirectoryContents, NSArray;

@interface IMMessageDirectoryContents : NSObject
{
    _Bool _needsGathering;	// 8 = 0x8
    IMDirectoryContents *_messagesDirectoryContents;	// 16 = 0x10
    IMDirectoryContents *_metaDataDirectoryContents;	// 24 = 0x18
    IMCombinedDirectoryContents *_allDirectoryContents;	// 32 = 0x20
    NSArray *_directoryContents;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000037041
@property(readonly, nonatomic) NSArray *directoryContents; // @synthesize directoryContents=_directoryContents;
@property(nonatomic) _Bool needsGathering; // @synthesize needsGathering=_needsGathering;
@property(readonly, nonatomic) IMCombinedDirectoryContents *allDirectoryContents; // @synthesize allDirectoryContents=_allDirectoryContents;
@property(readonly, nonatomic) IMDirectoryContents *metaDataDirectoryContents; // @synthesize metaDataDirectoryContents=_metaDataDirectoryContents;
@property(readonly, nonatomic) IMDirectoryContents *messagesDirectoryContents; // @synthesize messagesDirectoryContents=_messagesDirectoryContents;
- (_Bool)gatherIfNeeded;	// IMP=0x0000000000036fd3
- (void)gather;	// IMP=0x0000000000036d72
- (id)init;	// IMP=0x0000000000036b88

@end

