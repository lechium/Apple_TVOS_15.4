//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PPConnectionsLocationSourceDelegate;

@interface PPConnectionsSource : NSObject
{
    id <PPConnectionsLocationSourceDelegate> _delegate;	// 8 = 0x8
}

+ (id)identifier;	// IMP=0x00000000000fa234
+ (id)sharedInstance;	// IMP=0x00000000000fa22c
- (void).cxx_destruct;	// IMP=0x00000000000fa268
@property(nonatomic) __weak id <PPConnectionsLocationSourceDelegate> delegate; // @synthesize delegate=_delegate;

@end
