//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ODRFileUtilities : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x004000000000fce7
- (_Bool)_traverseDirectory:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0040000000010d37
- (id)_realPathWhatExistsInPath:(id)arg1;	// IMP=0x0010000000010a35
- (id)_realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;	// IMP=0x0010000000010361
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2;	// IMP=0x001000000001019a
- (_Bool)_itemExistsAtURL:(id)arg1;	// IMP=0x0010000000010062
- (_Bool)validateDownloadAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000fd3c

@end

