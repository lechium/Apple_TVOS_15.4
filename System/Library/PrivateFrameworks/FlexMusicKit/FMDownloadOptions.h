//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FMDownloadOptions : NSObject
{
    _Bool _allowsCellular;	// 8 = 0x8
    unsigned long long _downloadPriority;	// 16 = 0x10
}

@property(nonatomic) unsigned long long downloadPriority; // @synthesize downloadPriority=_downloadPriority;
@property(nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
- (id)description;	// IMP=0x0000000000004e9a
- (void)_configureDefaults;	// IMP=0x0000000000004e65
- (id)init;	// IMP=0x0000000000004e19

@end

