//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLSearchMetadataStore : NSObject
{
    NSString *_storePath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000531ae6
- (void)updateSearchMetadataTo:(id)arg1;	// IMP=0x000000000053194c
- (id)currentSearchMetadata;	// IMP=0x000000000053192c
- (void)deleteStore;	// IMP=0x00000000005317f4
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000531789

@end

