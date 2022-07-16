//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIDPReportingDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface TIDPReporterMock : NSObject <TIDPReportingDelegate>
{
    NSMutableArray *_recordsWritten;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001334be
@property(readonly, nonatomic) NSArray *recordsWritten;
- (void)reset;	// IMP=0x000000000013348a
- (_Bool)recordNumbersVectors:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000013335e
- (_Bool)record:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000133349
- (_Bool)record:(id)arg1;	// IMP=0x000000000013321c
- (id)init;	// IMP=0x00000000001331c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
