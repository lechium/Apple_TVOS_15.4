//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVMultiMoveWithFallbackTaskGroup.h>

@class NSDictionary, NSMutableDictionary;

@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup
{
    NSDictionary *_sourceEntityScheduleTags;	// 160 = 0xa0
    _Bool _isAutoScheduleSupported;	// 168 = 0xa8
    NSMutableDictionary *_destinationEntityScheduleTags;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000045c75
@property(retain, nonatomic) NSMutableDictionary *destinationEntityScheduleTags; // @synthesize destinationEntityScheduleTags=_destinationEntityScheduleTags;
@property(nonatomic) _Bool isAutoScheduleSupported; // @synthesize isAutoScheduleSupported=_isAutoScheduleSupported;
@property(retain, nonatomic) NSDictionary *sourceEntityScheduleTags; // @synthesize sourceEntityScheduleTags=_sourceEntityScheduleTags;
- (void)_completedPropFindTask:(id)arg1 intermediateETag:(id)arg2 intermediateScheduleTag:(id)arg3 destinationFilename:(id)arg4;	// IMP=0x0000000000044b2e
- (void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044197
- (id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(_Bool)arg3 useFallback:(_Bool)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 sourceEntityScheduleTags:(id)arg8 accountInfoProvider:(id)arg9 taskManager:(id)arg10 isAutoScheduleSupported:(_Bool)arg11;	// IMP=0x0000000000044068

@end
