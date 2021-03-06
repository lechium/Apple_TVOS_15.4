//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallHistory/CHConfiguration-Protocol.h>

@class NSString;
@protocol CHConfigurationDelegate, CHKeyValueDataSource;

@interface CHConfiguration : NSObject <CHConfiguration>
{
    id <CHKeyValueDataSource> _dataSource;	// 8 = 0x8
    id <CHConfigurationDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ee5d
@property(nonatomic) __weak id <CHConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <CHKeyValueDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)numberForKey:(id)arg1;	// IMP=0x000000000000ed74
@property(readonly, nonatomic, getter=isCloudKitEnabled) _Bool cloudKitEnabled;
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000000ecbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

