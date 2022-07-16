//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KGDatabaseNameCache, NSURL, NSUUID;

@interface KGDatabase : NSObject
{
    void *_database;	// 8 = 0x8
    KGDatabaseNameCache *_nameCache;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
}

+ (void)deleteClosedDatabaseFilesAtStoreURL:(id)arg1;	// IMP=0x00000000000fbf06
+ (_Bool)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000fbcfa
+ (_Bool)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000fbafd
+ (_Bool)destroyAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000fb9a1
+ (void)initialize;	// IMP=0x00000000000fb8a2
- (void).cxx_destruct;	// IMP=0x00000000000fa5e9
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void *)database;	// IMP=0x00000000000fa5d5
- (void)purgeCachedEdgeStatements;	// IMP=0x00000000000fa59c
- (void)purgeCachedNodeStatements;	// IMP=0x00000000000fa563
- (_Bool)rollbackTransaction;	// IMP=0x00000000000fa531
- (_Bool)commitTransaction;	// IMP=0x00000000000fa51d
- (_Bool)beginTransaction;	// IMP=0x00000000000fa509
- (id)edgeIdentifiersWithLabels:(id)arg1 direction:(unsigned long long)arg2 forNodeIdentifier:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000fa3cb
- (id)edgeIdentifiersForNodeIdentifier:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000fa30d
- (id)allNodeIdentifiersOfEdgesWithIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000fa25f
- (_Bool)appendNodeIdentifiersOfEdgesWithIdentifiers:(id)arg1 sourceNodeIdentifiers:(id)arg2 targetNodeIdentifiers:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000fa11c
- (id)inEdgeIdentifiersOfNodesWithIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000fa021
- (id)outEdgeIdentifiersOfNodesWithIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f9f26
- (id)unionOfEdgesWithLabels:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f9e18
- (id)intersectionOfEdgesWithLabels:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f9d10
- (id)edgeIdentifiersSortedByPropertyForName:(id)arg1 dataType:(long long)arg2 ascending:(_Bool)arg3 limit:(long long)arg4 edgeIdentifiers:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000f9a04
- (id)filterEdgeIdentifiersForPropertyName:(id)arg1 rangeValue1:(id)arg2 rangeValue2:(id)arg3 comparator:(unsigned long long)arg4 edgeIdentifiers:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000f9439
- (id)filterEdgeIdentifiersForPropertyName:(id)arg1 values:(id)arg2 edgeIdentifiers:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000f8a64
- (id)filterEdgeIdentifiersForPropertyName:(id)arg1 value:(id)arg2 comparator:(unsigned long long)arg3 edgeIdentifiers:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000f85e2
- (id)edgeIdentifiersForPropertyName:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f7c78
- (id)edgeIdentifiersForPropertyName:(id)arg1 rangeValue1:(id)arg2 rangeValue2:(id)arg3 comparator:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000000000f76f0
- (id)edgeIdentifiersForPropertyName:(id)arg1 value:(id)arg2 comparator:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000f737e
- (id)unionOfNodesWithLabels:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f7270
- (id)intersectionOfNodesWithLabels:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f7168
- (id)nodeIdentifiersSortedByPropertyForName:(id)arg1 dataType:(long long)arg2 ascending:(_Bool)arg3 limit:(long long)arg4 nodeIdentifiers:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000f6e5c
- (id)filterNodeIdentifiersForPropertyName:(id)arg1 rangeValue1:(id)arg2 rangeValue2:(id)arg3 comparator:(unsigned long long)arg4 nodeIdentifiers:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000f6891
- (id)filterNodeIdentifiersForPropertyName:(id)arg1 values:(id)arg2 nodeIdentifiers:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000f5ebc
- (id)filterNodeIdentifiersForPropertyName:(id)arg1 value:(id)arg2 comparator:(unsigned long long)arg3 nodeIdentifiers:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000f5abe
- (id)nodeIdentifiersForPropertyName:(id)arg1 values:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f5154
- (void)distributeValuesByType:(id)arg1 toIntegerValues:(id)arg2 floatValues:(id)arg3 stringValues:(id)arg4;	// IMP=0x00000000000f4e3c
- (id)nodeIdentifiersForPropertyName:(id)arg1 rangeValue1:(id)arg2 rangeValue2:(id)arg3 comparator:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000000000f4930
- (id)nodeIdentifiersForPropertyName:(id)arg1 value:(id)arg2 comparator:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000f45c1
- (_Bool)removeEdges:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f4518
- (_Bool)removeNodes:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f446f
- (_Bool)removeEdge:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000f440e
- (_Bool)removeNode:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000f43af
- (unsigned long long)addEdgeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNodeIdentifier:(unsigned long long)arg5 targetNodeIdentifier:(unsigned long long)arg6 error:(id *)arg7;	// IMP=0x00000000000f4063
- (_Bool)addEdges:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f3773
- (_Bool)setEdgeWeight:(float)arg1 forIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000f3710
- (_Bool)setEdgeProperties:(id)arg1 forIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000f3497
- (unsigned long long)addNodeWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000f314c
- (_Bool)addNodes:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f2941
- (_Bool)setNodeWeight:(float)arg1 forIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000f28de
- (_Bool)setNodeProperties:(id)arg1 forIdentifier:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000f2665
- (void)_enumerateUnsignedIntegerPropertiesWithCursor:(void *)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f25cb
- (void)_enumerateDoublePropertiesWithCursor:(void *)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f2534
- (void)_enumerateStringPropertiesWithCursor:(void *)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f2412
- (void)_enumerateIntegerPropertiesWithCursor:(void *)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f2378
- (void)_enumeratePropertiesForCursor:(void *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f21cc
- (id)propertyValueForCursor:(void *)arg1;	// IMP=0x00000000000f2016
- (void)_enumerateEdgesWithEdgeCursor:(void *)arg1 propertiesCursor:(void *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f1de9
- (void)_enumerateNodesWithNodeCursor:(void *)arg1 propertiesCursor:(void *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f1bbc
- (void)_enumerateEdgeTableWithEdgeCursor:(void *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f18ba
- (void)enumerateUnsignedIntegerPropertyValuesForEdgesWithIdentifiers:(id)arg1 propertyName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f181e
- (void)enumerateDoublePropertyValuesForEdgesWithIdentifiers:(id)arg1 propertyName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f1782
- (void)enumerateStringPropertyValuesForEdgesWithIdentifiers:(id)arg1 propertyName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f16e6
- (void)enumerateIntegerPropertyValuesForEdgesWithIdentifiers:(id)arg1 propertyName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f164a
- (struct AttributeValueCursor)edgeAttributeValueCursorWithIdentifiers:(id)arg1 propertyName:(id)arg2 sampleValue:(id)arg3;	// IMP=0x00000000000f1565
- (struct AttributeValueCursor)edgeAttributeValueCursorWithIdentifiers:(id)arg1;	// IMP=0x00000000000f14a6
- (struct EdgeCursor)edgeCursorWithIdentifiers:(id)arg1;	// IMP=0x00000000000f13e7
- (void)_enumerateNodeTableWithNodeCursor:(void *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f1116
- (void)enumerateUnsignedIntegerPropertyValuesForNodesWithIdentifiers:(id)arg1 propertyName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f107a
- (void)enumerateDoublePropertyValuesForNodesWithIdentifiers:(id)arg1 propertyName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f0fde
- (void)enumerateStringPropertyValuesForNodesWithIdentifiers:(id)arg1 propertyName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f0f42
- (void)enumerateIntegerPropertyValuesForNodesWithIdentifiers:(id)arg1 propertyName:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f0ea6
- (struct AttributeValueCursor)nodeAttributeValueCursorWithIdentifiers:(id)arg1 propertyName:(id)arg2 sampleValue:(id)arg3;	// IMP=0x00000000000f0dc1
- (struct AttributeValueCursor)nodeAttributeValueCursorWithIdentifiers:(id)arg1;	// IMP=0x00000000000f0d02
- (struct NodeCursor)nodeCursorWithIdentifiers:(id)arg1;	// IMP=0x00000000000f0c43
- (void)enumerateSourceAndTargetIdentifiersWithEdgeIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f0b60
- (void)enumerateEdgesWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f0a83
- (void)enumerateNodesWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f09a6
- (int)degasEdgeDirectionFromKG:(unsigned long long)arg1;	// IMP=0x00000000000f08fb
- (id)propertyNameForAttrIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000f087b
- (unsigned long long)attributeIdentifierForPropertyName:(id)arg1 sampleValue:(id)arg2;	// IMP=0x00000000000f05bd
- (void)loadPropertyNames;	// IMP=0x00000000000f043e
@property(readonly, nonatomic) NSUUID *graphIdentifier;
@property(nonatomic) unsigned long long graphVersion;
- (id)edgeLabels;	// IMP=0x00000000000effde
- (id)nodeLabels;	// IMP=0x00000000000efe5d
- (id)labelNameForLabelIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000efddd
- (_Bool)labelIdentifiers:(void *)arg1 forLabels:(id)arg2;	// IMP=0x00000000000efbcf
- (struct Bitmap)upsertLabels:(id)arg1;	// IMP=0x00000000000efa1c
- (unsigned long long)upsertLabel:(id)arg1;	// IMP=0x00000000000ef8bf
- (void)loadLabels;	// IMP=0x00000000000ef741
- (_Bool)copyToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ef601
- (void)close;	// IMP=0x00000000000ef59d
- (_Bool)openWithMode:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000ef451
- (id)initWithURL:(id)arg1 nameCache:(id)arg2;	// IMP=0x00000000000ef360

@end

