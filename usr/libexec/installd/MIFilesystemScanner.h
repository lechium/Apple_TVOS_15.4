//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol MIFilesystemScannerDelegate;

@interface MIFilesystemScanner : NSObject
{
    id <MIFilesystemScannerDelegate> _delegate;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000029954
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <MIFilesystemScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (MISSING_TYPE *)performScanWithError: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000029126
- (id)init;	// IMP=0x001000000002910f
- (id)initWithScanOptions:(unsigned long long)arg1;	// IMP=0x00100000000290d2
- (_Bool)_scanBundleContainersWithError:(id *)arg1 ignoredErrorOccurredOnOneOrMoreItems:(_Bool *)arg2;	// IMP=0x0010000000029042
- (_Bool)_scanBundleContainerType:(long long)arg1 withError:(id *)arg2 ignoredErrorOccurredOnOneOrMoreItems:(_Bool *)arg3;	// IMP=0x0010000000028af6
- (_Bool)_scanFrameworksLocationsWithError:(id *)arg1;	// IMP=0x00100000000288c9
- (_Bool)_scanFrameworkDirectory:(id)arg1 withError:(id *)arg2;	// IMP=0x00100000000283e5
- (_Bool)_scanAppsDirectory:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000027e9d

@end

