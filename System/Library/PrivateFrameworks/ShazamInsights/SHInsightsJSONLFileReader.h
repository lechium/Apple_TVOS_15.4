//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SHInsightsJSONLDataDetokenizerDelegate;

__attribute__((visibility("hidden")))
@interface SHInsightsJSONLFileReader : NSObject
{
    id <SHInsightsJSONLDataDetokenizerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000d4be
@property(nonatomic) __weak id <SHInsightsJSONLDataDetokenizerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)loadDataFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d33c

@end
