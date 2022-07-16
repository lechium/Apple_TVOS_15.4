//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNSchedulerProvider-Protocol.h>

@class NSString;
@protocol CNScheduler;

@interface CNSchedulerProvider : NSObject <CNSchedulerProvider>
{
    id <CNScheduler> _backgroundScheduler;	// 8 = 0x8
    id <CNScheduler> _mainThreadScheduler;	// 16 = 0x10
    id <CNScheduler> _inlineScheduler;	// 24 = 0x18
    id <CNScheduler> _immediateScheduler;	// 32 = 0x20
    CDUnknownBlockType _serialSchedulerProvider;	// 40 = 0x28
    CDUnknownBlockType _synchronousSerialSchedulerProvider;	// 48 = 0x30
    CDUnknownBlockType _readerWriterSchedulerProvider;	// 56 = 0x38
}

+ (id)providerWithBackgroundConcurrencyLimit:(long long)arg1;	// IMP=0x0000000000066aa4
+ (id)makeDefaultProvider;	// IMP=0x000000000006699a
+ (id)defaultProvider;	// IMP=0x0000000000066905
- (void).cxx_destruct;	// IMP=0x000000000006709e
@property(readonly, copy, nonatomic) CDUnknownBlockType readerWriterSchedulerProvider; // @synthesize readerWriterSchedulerProvider=_readerWriterSchedulerProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType synchronousSerialSchedulerProvider; // @synthesize synchronousSerialSchedulerProvider=_synchronousSerialSchedulerProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType serialSchedulerProvider; // @synthesize serialSchedulerProvider=_serialSchedulerProvider;
@property(readonly, nonatomic) id <CNScheduler> immediateScheduler; // @synthesize immediateScheduler=_immediateScheduler;
@property(readonly, nonatomic) id <CNScheduler> inlineScheduler; // @synthesize inlineScheduler=_inlineScheduler;
@property(readonly, nonatomic) id <CNScheduler> mainThreadScheduler; // @synthesize mainThreadScheduler=_mainThreadScheduler;
@property(readonly, nonatomic) id <CNScheduler> backgroundScheduler; // @synthesize backgroundScheduler=_backgroundScheduler;
- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)arg1;	// IMP=0x0000000000066fea
- (id)newReaderWriterSchedulerWithName:(id)arg1;	// IMP=0x0000000000066f7c
- (id)newSynchronousSerialSchedulerWithName:(id)arg1;	// IMP=0x0000000000066f0e
- (id)newSerialSchedulerWithName:(id)arg1;	// IMP=0x0000000000066ea0
- (id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 inlineScheduler:(id)arg3 immediateScheduler:(id)arg4 serialSchedulerProvider:(CDUnknownBlockType)arg5 synchronousSerialSchedulerProvider:(CDUnknownBlockType)arg6 readerWriterSchedulerProvider:(CDUnknownBlockType)arg7;	// IMP=0x0000000000066d1a
- (id)initWithBackgroundScheduler:(id)arg1 mainThreadScheduler:(id)arg2 immediateScheduler:(id)arg3 serialSchedulerProvider:(CDUnknownBlockType)arg4 synchronousSerialSchedulerProvider:(CDUnknownBlockType)arg5 readerWriterSchedulerProvider:(CDUnknownBlockType)arg6;	// IMP=0x0000000000066c05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
