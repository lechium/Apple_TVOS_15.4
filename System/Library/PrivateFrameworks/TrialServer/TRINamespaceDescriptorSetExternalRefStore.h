//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIPathReferencing-Protocol.h>

@class TRIServerContext;

@interface TRINamespaceDescriptorSetExternalRefStore : NSObject <TRIPathReferencing>
{
    TRIServerContext *_context;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000246d2
- (_Bool)hasReferenceToPath:(id)arg1;	// IMP=0x00000000000244fe
- (id)initWithServerContext:(id)arg1;	// IMP=0x0000000000024493

@end

