//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIRemoveFromPlayHistoryRequestManager : NSObject
{
    NSMutableDictionary *_ongoingDeleteIDOperationDictionary;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000b9518
- (void).cxx_destruct;	// IMP=0x00000000000b9ab6
@property(retain, nonatomic) NSMutableDictionary *ongoingDeleteIDOperationDictionary; // @synthesize ongoingDeleteIDOperationDictionary=_ongoingDeleteIDOperationDictionary;
- (void)sendRequestForDeleteID:(id)arg1 isContinueWatching:(_Bool)arg2;	// IMP=0x00000000000b9624
- (id)init;	// IMP=0x00000000000b95e3
- (id)_init;	// IMP=0x00000000000b957d

@end

