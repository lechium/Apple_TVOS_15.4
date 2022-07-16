//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSItemProvider.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface UIItemProvider : NSItemProvider
{
    NSDictionary *_teamMetadata;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a893da
@property(copy, nonatomic) NSDictionary *teamMetadata; // @synthesize teamMetadata=_teamMetadata;
@property(copy, nonatomic) NSNumber *size;
@property(copy, nonatomic) NSDate *modificationDate;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) struct CGSize estimatedDisplayedSize;
- (id)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a89119
- (id)createObjectOfClass:(Class)arg1 error:(id *)arg2;	// IMP=0x0000000000a89102
- (id)createObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a890f0
- (void)instantiateObjectOfClass:(Class)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a890d2
- (_Bool)canInstantiateObjectOfClass:(Class)arg1;	// IMP=0x0000000000a890c0
- (_Bool)canCreateObjectOfClass:(Class)arg1;	// IMP=0x0000000000a890ae
- (void)registerObjectOfClass:(Class)arg1 options:(id)arg2 loadHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a8909a
- (void)registerObject:(id)arg1 options:(id)arg2;	// IMP=0x0000000000a89086
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a8907e
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 inPlace:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000000a89076
- (void)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a89070
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a8905e
- (_Bool)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000a88e2e
- (id)copyFileRepresentationForTypeIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000a88d71
- (void)copyFileRepresentationForTypeIdentifier:(id)arg1 toURL:(id)arg2 options:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a88bcc
- (id)copyFileRepresentationForTypeIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a88bb1
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a88923
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000a8890c
- (void)copyDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a88856
- (id)copyDataRepresentationForTypeIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a8883b
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 loadHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a886f9
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a885c3
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 fileOptions:(long long)arg2 options:(id)arg3 loadHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a885ae
- (void)registerDataRepresentationForTypeIdentifier:(id)arg1 options:(id)arg2 loadHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a8859a
- (id)loadObjectOfClass:(Class)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a883ba

@end

