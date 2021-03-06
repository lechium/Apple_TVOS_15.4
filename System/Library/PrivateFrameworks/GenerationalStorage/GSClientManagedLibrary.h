//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GenerationalStorage/GSLibraryProtocol-Protocol.h>

@class GSTemporaryStorage, NSString;
@protocol GSAdditionStoring;

__attribute__((visibility("hidden")))
@interface GSClientManagedLibrary : NSObject <GSLibraryProtocol>
{
    GSTemporaryStorage *_ts;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000010ed2
- (_Bool)generationsRemove:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010c5c
- (id)initWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000109c6
@property(readonly, nonatomic) NSString *nameSpace;
@property(readonly, nonatomic) NSObject<GSAdditionStoring> *storage;

@end

